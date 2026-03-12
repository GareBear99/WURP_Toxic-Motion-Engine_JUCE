# Theme Pack Spec

Required:
- theme.json
- fallback static image
- accent colors
- at least one background asset

Recommended:
- overlay asset
- particle asset
- icon set
- animation frame strip or animated webp

The runtime should always fail closed:
- invalid theme => revert to default_toxic
- missing animation => use static fallback
