#pragma once

#include "Any.hpp"
#include "Function.hpp"
#include "utils.hpp"
#include "Function.hpp"
#include "Sequence.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

template<typename T>
class Promise : public emlite::Val {
    explicit Promise(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static Promise take_ownership(Handle h) noexcept {
    return Promise(h);
}
    explicit Promise(const emlite::Val &v) noexcept : emlite::Val(v) {}
    Promise() noexcept : emlite::Val(emlite::Val::undefined()) {}

    Promise then(
        const Function &onFulfilled,
        const Function &onRejected
    ) {
    return call("then", onFulfilled, onRejected)
        .template as<Promise>();
}
    Promise _catch(const Function &onRejected) {
    return call("catch", onRejected).template as<Promise>();
}
    Promise finally(const Function &onFinally) {
    return call("finally", onFinally).template as<Promise>();
}

    static Promise resolve(const Any &value = undefined()) {
    return Val::global("Promise")
        .call("resolve", value)
        .as<Promise>();
}
    static Promise reject(const Any &reason = undefined()) {
    return Val::global("Promise")
        .call("reject", reason)
        .as<Promise>();
}

    T await() const {
        return emlite::Val::await().template as<T>();
    }

    Promise clone() const noexcept {
        return *this;
    }
};

} // namespace jsbind