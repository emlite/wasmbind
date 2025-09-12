#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class LockOptions;
class LockManagerSnapshot;

/// Interface LockManager
/// [`LockManager`](https://developer.mozilla.org/en-US/docs/Web/API/LockManager)
class LockManager : public emlite::Val {
    explicit LockManager(Handle h) noexcept;
public:
    explicit LockManager(const emlite::Val &val) noexcept;
    static LockManager take_ownership(Handle h) noexcept;
    [[nodiscard]] LockManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The request method.
    /// [`LockManager.request`](https://developer.mozilla.org/en-US/docs/Web/API/LockManager/request)
    jsbind::Promise<jsbind::Any> request(const jsbind::String& name, const jsbind::Function& callback);
    /// The request method.
    /// [`LockManager.request`](https://developer.mozilla.org/en-US/docs/Web/API/LockManager/request)
    jsbind::Promise<jsbind::Any> request(const jsbind::String& name, const LockOptions& options, const jsbind::Function& callback);
    /// The query method.
    /// [`LockManager.query`](https://developer.mozilla.org/en-US/docs/Web/API/LockManager/query)
    jsbind::Promise<LockManagerSnapshot> query();
};

} // namespace webbind