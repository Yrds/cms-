project('demo', 'cpp')


libcmsplusplus = subproject('cmsplusplus')
libcmsplusplus_dep = libcmsplusplus.get_variable('libcmsplusplus_dep')

deps = [libcmsplusplus_dep]

### DEMO ###


demo_sources = [
'main.cpp'
]


executable('demo', demo_sources, dependencies: deps)

### SIMPLE PAGE ###
simple_page_sources = [
  'simplePage.cpp'
  ]

executable('simple_page', simple_page_sources, dependencies: deps)
