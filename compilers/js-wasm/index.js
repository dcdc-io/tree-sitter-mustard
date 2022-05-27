const Parser = require("tree-sitter")
const Mustard = require("../../")

const parser = new Parser()
parser.setLanguage(Mustard)

const tree = parser.parse("let x = 1 + 1")

const cursor = tree.rootNode.walk()

cursor.