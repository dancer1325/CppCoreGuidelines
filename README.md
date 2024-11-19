[![C++ Core Guidelines](cpp_core_guidelines_logo_text.png)](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

>"Within C++ is a smaller, simpler, safer language struggling to get out."
>-- <cite>Bjarne Stroustrup</cite>

* [C++ Core Guidelines](CppCoreGuidelines.md)
  * collaborative C++ guidelines language  
    * AFTER many person-years of
      * discussion
      * design 

## Getting started

* [GH-flavored MarkDown](https://github.github.com/gfm/)
  * Reasons: 🧠 
    * kept simple (MOSTLY in ASCII)
    * allow automatic post-processing (_Example:_ language translation & reformatting) 🧠
* [This repo / version formatted for browsing](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
  * MOST updated is version | master branch
    * Reason: 🧠MANUALLY integrated | browser 🧠 
* versioning
  * constantly evolving / strict "release" cadence
    * see [tagging](https://github.com/isocpp/CppCoreGuidelines/releases)
  * Bjarne Stroustrup periodically reviews the document  
* header-only Guidelines Support Library
  * is used
  * _Example of an implementation:_ [GSL: Guidelines Support Library](https://github.com/Microsoft/GSL)

## Background and scope

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
* set of rules
  * emphasizes safety & simplicity
  * designed -- to be supported by an -- analysis tool

## Contributions and LICENSE

Comments and suggestions for improvements are most welcome. We plan to modify and extend this document as our understanding improves and the
language and the set of available libraries improve. More details are found at [CONTRIBUTING](./CONTRIBUTING.md) and [LICENSE](./LICENSE).

Thanks to [DigitalOcean](https://www.digitalocean.com/?refcode=32f291566cf7&utm_campaign=Referral_Invite&utm_medium=Referral_Program&utm_source=CopyPaste) for hosting the Standard C++ Foundation website.
