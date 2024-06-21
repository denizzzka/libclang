// $ c++ -c -I/home/denizzz/Dev/llvm-project/clang/ -I/usr/lib/llvm-16/include/ cpp_wrapper/tooling.cpp

#include <memory>
#include "clang/Tooling/Tooling.h"
//~ #include "clang-c/CXString.h"
#include "llvm/ADT/StringRef.h"
#include "tools/libclang/CXString.h"

clang::ASTUnit* buildASTFromCode(
    const llvm::StringRef Code,
    const llvm::StringRef FileName
)
{
    return clang::tooling::buildASTFromCode(Code, FileName).release();
}

//~ std::make_shared<clang::PCHContainerOperations> unused_for_test_only;

//~ clang_getCString(Str)
//~ clang::cxstring::createRef
//~ return return cxstring::createDup(ASTNameGen.getName(D));
