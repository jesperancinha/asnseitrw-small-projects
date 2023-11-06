fun main(args: Array<String>) {
    println("Hello world!")
    val b = null
    println("Hello world!${b ?: "42"}")
    val c = 42
    println("Hello world!${c ?: "42"}")
}