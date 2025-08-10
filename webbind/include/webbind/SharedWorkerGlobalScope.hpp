#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkerGlobalScope.hpp"

namespace webbind {

/// Interface SharedWorkerGlobalScope
/// [`SharedWorkerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorkerGlobalScope)
class SharedWorkerGlobalScope : public WorkerGlobalScope {
    explicit SharedWorkerGlobalScope(Handle h) noexcept;
public:
    explicit SharedWorkerGlobalScope(const emlite::Val &val) noexcept;
    static SharedWorkerGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] SharedWorkerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`SharedWorkerGlobalScope.name`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorkerGlobalScope/name)
    [[nodiscard]] jsbind::String name() const;
    /// The close method.
    /// [`SharedWorkerGlobalScope.close`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorkerGlobalScope/close)
    jsbind::Undefined close();
    /// Getter of the `onconnect` attribute.
    /// [`SharedWorkerGlobalScope.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorkerGlobalScope/onconnect)
    [[nodiscard]] jsbind::Any onconnect() const;
    /// Setter of the `onconnect` attribute.
    /// [`SharedWorkerGlobalScope.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorkerGlobalScope/onconnect)
    void onconnect(const jsbind::Any& value);
};

} // namespace webbind