#pragma once
#include "Any.hpp"
#include "Array.hpp"
#include "Function.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

class Reflect : public emlite::Val {
    static Any apply(
        const Function &target,
        const Any &thisArg,
        const TypedArray<Any> &argumentsList
    );

    static Any construct(
        const Function &target,
        const TypedArray<Any> &args,
        const Any &newTarget = Any()
    );

    static bool defineProperty(
        const Any &target,
        const Any &key,
        const Any &attributes
    );

    static bool deleteProperty(
        const Any &target, const Any &key
    );

    static Any get(
        const Any &target,
        const Any &key,
        const Any &receiver = Any()
    );

    static Any getOwnPropertyDescriptor(
        const Any &target, const Any &key
    );

    static Any getPrototypeOf(const Any &target);

    static bool has(const Any &target, const Any &key);

    static bool isExtensible(const Any &target);

    static TypedArray<Any> ownKeys(const Any &target);

    static bool preventExtensions(const Any &target);

    static bool set(
        const Any &target,
        const Any &key,
        const Any &value,
        const Any &receiver = Any()
    );

    static bool setPrototypeOf(
        const Any &target, const Any &proto
    );
};
} // namespace jsbind
