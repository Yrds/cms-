#CMS PLUS PLUS

## What da program doin?



## Using with meson

just include

```meson
libcmsplusplus = subproject('cmsplusplus')
libcmsplusplus_dep = libcmsplusplus.get_variable('libcmsplusplus_dep')

```

and link as dependency as you wish(just a example)

```meson
deps = [libcmsplusplus_dep]
executable('demo', sources, dependencies: deps)
```

you can check `test/program/` for more details:

