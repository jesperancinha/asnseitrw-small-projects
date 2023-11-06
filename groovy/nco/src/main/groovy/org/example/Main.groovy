package org.example

static void main(String[] args) {
    final Integer a = null
    println(String.format("Hello world! %s", a ?: "42"))
    final Integer b = null
    println(String.format("Hello world! %s", b ?: "42"))
    final Integer c = 42
    println(String.format("Hello world! %s", c ?: "84"))
    final Boolean d = false
    println(String.format("Hello world! %s", d ?: "84"))
    final String[] e = []
    println(String.format("Hello world! %s", e ?: "84"))
    final String f = ""
    println(String.format("Hello world! %s", f ?: "84"))
}