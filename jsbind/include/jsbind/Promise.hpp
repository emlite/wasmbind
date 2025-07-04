#pragma once
#include "Any.hpp"
#include "Function.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

class Promise : public emlite::Val {
    explicit Promise(Handle h) noexcept;

  public:
    static Promise take_ownership(Handle h) noexcept;
    explicit Promise(const emlite::Val &v) noexcept;
    Promise() noexcept;

    Promise then(
        const Function &onFulfilled,
        const Function &onRejected
    );
    Promise _catch(const Function &onRejected);
    Promise finally(const Function &onFinally);

    static Promise resolve(const Any &value = undefined());
    static Promise reject(const Any &reason = undefined());

    DECLARE_CLONE(Promise)
};

} // namespace jsbind