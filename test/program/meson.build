project('demo', 'cpp')


libcmsplusplus = subproject('cmsplusplus')
libcmsplusplus_dep = libcmsplusplus.get_variable('libcmsplusplus_dep')

sources = [
'main.cpp'
]

deps = [libcmsplusplus_dep]

executable('demo', sources, dependencies: deps)
