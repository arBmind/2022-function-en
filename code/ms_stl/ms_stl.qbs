Application {
    consoleApplication: true

    Depends { name: "cpp" }
    cpp.cxxLanguageVersion: "c++23"

    files: "main.cpp"
}
