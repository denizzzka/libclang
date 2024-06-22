// $ c++ -c -I/home/denizzz/Dev/llvm-project/clang/ -I/usr/lib/llvm-16/include/ cpp_wrapper/tooling.cpp

#include <memory>
#include "clang/Frontend/ASTUnit.h"
#include "clang/Tooling/Tooling.h"
//~ #include "clang-c/CXString.h"
#include "llvm/ADT/StringRef.h"
#include "tools/libclang/CXString.h"

llvm::StringRef createStringRef(const char *data, size_t length)
{
    return llvm::StringRef(data, length);
}

clang::ASTUnit* buildASTFromCode(
    llvm::StringRef Code,
    llvm::StringRef FileName
)
{
    return clang::tooling::buildASTFromCode(Code, FileName).release();
}

//~ std::make_shared<clang::PCHContainerOperations> unused_for_test_only;

//~ clang_getCString(Str)
//~ clang::cxstring::createRef
//~ return return cxstring::createDup(ASTNameGen.getName(D));
