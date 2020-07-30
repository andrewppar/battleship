file(REMOVE_RECURSE
  "mainDemo.pdb"
  "mainDemo"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/mainDemo.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
