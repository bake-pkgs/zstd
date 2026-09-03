# zstd for bake

[zstd](https://github.com/facebook/zstd) 1.5.7, packaged for
[bake](https://github.com/Ariaszzzhc/bake). Static library (common +
compress + decompress), C.

## Use

```bash
bake add https://github.com/bake-pkgs/zstd --tag v1.5.7 zstd
```

```toml
[dependencies]
zstd = { url = "https://github.com/bake-pkgs/zstd", tag = "v1.5.7" }
```

```c
#include <zstd.h>
```

Single-threaded (no `ZSTD_MULTITHREAD`); legacy formats and
`dictBuilder` are not part of the port, and the `zstd` CLI is not built.
License: BSD/GPLv2 dual (upstream).
