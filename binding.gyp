{
  "targets": [
    {
      "target_name": "tree_sitter_mustard_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "src/parser.c",
        # If your language uses an external scanner, add it here.
        "src/scanner.c",
        "bindings/node/binding.cc",
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
