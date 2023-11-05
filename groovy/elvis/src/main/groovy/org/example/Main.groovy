package org.example

static void main(String[] args) {
    println "Hello world!"
    final Integer b = null
    println(String.format("Hello world! %s", b ?: "42"))
    println "Hello world!"
    final Integer c = 42
    println(String.format("Hello world! %s", c ?: "42"))
}