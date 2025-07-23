## how to run locally EACH file?
* ways
  * -- via -- IDE
    * click to run
  * -- via -- CL tool
    * `clang++ -o executableOutputGenerated fileInput.cpp -stdlib=libc++`
      * compile generating the executable
      * _Example:_ `clang++ -o function-parameterpassing-main function-parameterpassing-main.cpp -stdlib=libc++`
    * `./executableOutputGenerated`
      * execute the generated executable
      * _Example:_ `./function-parameterpassing-main`
