# CMS PLUS PLUS

## NOTE:

This project is not working in any ways, there is a lot os pseucode and even compiles.


## What da program doin?

This is a library made for construct static websites with a fully customizable structure

That library is meant to be used alone but can be embed in other project because is totally independent of other libraries

## Using with meson

just clone this repository into your subprojects(located on your meson project root) directory include, then add this to your meson build:


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
