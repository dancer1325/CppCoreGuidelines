[![C++ Core Guidelines](cpp_core_guidelines_logo_text.png)](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

>"Within C++ is a smaller, simpler, safer language struggling to get out."
>-- <cite>Bjarne Stroustrup</cite>

* goal
  * help to use modern C++ effectively
    * modern C++ == effective use of ISO C++ standard == C++11+
  * uniform style ACROSS code bases
  * higher-level issues
    * _Example:_ interfaces, resource management, memory management, and concurrency
    * -> NO concern low-level issues
      * _Example:_ naming conventions and indentation style
  * rules about application architecture & library design
    * benefits
      * code statically type-safe,
      * NO resource leaks,
      * catches MANY MORE programming logic errors
      * run fast
      * faster/easier initial development
    * if you want to upgrade old systems -> it's hard

* [C++ Core Guidelines](CppCoreGuidelines.md)
  * collaborative C++ guidelines language  
    * AFTER many person-years of
      * discussion
      * design 
  * hosted | [here](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
    * periodically updated -- with -- this repo's master branch
  * use [GH-flavored MarkDown](https://github.github.com/gfm/)
    * Reasons: 🧠
      * kept simple (MOSTLY in ASCII)
      * allow automatic post-processing (_Example:_ language translation & reformatting) 🧠

## Notes

* [Guidelines Support Library](docs/gsl-intro.md)
  * _Example of an implementation:_ [GSL: Guidelines Support Library](https://github.com/Microsoft/GSL)
