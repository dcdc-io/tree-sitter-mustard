let cheeses = ["cheddar", "brie", "halloumi"]

export let cheeses = ["cheddar", "brie", "halloumi"]

rule positive = number > 10 else "not a positive number"

export rule positive = number > 10 else "not a positive number"

let importedFile = include("some-file.ms")

import negative from "some-file.ms"

type weekday = "monday" | "tuesday" | "wednesday" | "thursday" | "friday"

type schedule = {
    [day]: {
        tasks: getTask()
    } for day in weekday
}

{
    foo: 1,
    bar(string): 2,
    fizz(number > 0),
    buzz(number < 10): 5,

    flip(string else "flop"),
    flop(number > 10 else "whiz"),

    fluff(positive),
    flaff(negative),

    ...include("file.ms"),

    ...importedFile,

    final!: 10,
    optional?: 10,

    -deletekey,
    +appendList: [10],
    +appendList: [...*, 10],
    +prependList: [10, ...*],

    +addkey: {
        newKey: "foo"
    },
    +addkey: {
        ...*,
        newKey: "foo"
    },
    +insertKey: {
        newKey: "foo",
        ...*
    },

    ++deep.path.append: [...*, "hello"],

    deep.path.set: "hello",

    ...{ [key]: val for key, val in someObject },

    arr: [x + 1 for x in range(10)],

    let names = [`foo${i}` for i in range(10)],

    ...{ [key]: key for key in names },

    ...{ [key]: domain for key, { domain } in urls }
}