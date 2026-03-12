#!/usr/bin/env python3
import json, sys
from pathlib import Path

folder = Path(sys.argv[1]) if len(sys.argv) > 1 else Path("themes/default_toxic")
theme_file = folder / "theme.json"
if not theme_file.exists():
    raise SystemExit("Missing theme.json")
data = json.loads(theme_file.read_text())
required = ["name", "accent", "gas_speed", "particle_density", "fallback_background"]
missing = [k for k in required if k not in data]
if missing:
    raise SystemExit(f"Missing keys: {missing}")
print("Theme looks structurally valid.")
