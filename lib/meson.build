project('libcmsplusplus', 'cpp')

sources = [
'src/Page.cpp',
'src/Element.cpp'
]

inc = ['inc']
libcmsplusplus = library('cmsplusplus', sources, version: '0.0.1', include_directories: inc, soversion: '0')

libcmsplusplus_dep = declare_dependency(include_directories: inc, link_with: libcmsplusplus)
