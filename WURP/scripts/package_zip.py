#!/usr/bin/env python3
from pathlib import Path
import zipfile

root = Path(__file__).resolve().parents[1]
out = root / "dist_package.zip"

with zipfile.ZipFile(out, "w", zipfile.ZIP_DEFLATED) as z:
    for p in root.rglob("*"):
        if p.is_file() and p.name != out.name:
            z.write(p, p.relative_to(root))
print(f"Created: {out}")
