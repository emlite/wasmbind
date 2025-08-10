#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceObserverInit.hpp"

namespace webbind {

/// Interface PerformanceObserver
/// [`PerformanceObserver`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver)
class PerformanceObserver : public emlite::Val {
    explicit PerformanceObserver(Handle h) noexcept;
public:
    explicit PerformanceObserver(const emlite::Val &val) noexcept;
    static PerformanceObserver take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceObserver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PerformanceObserver(..)` constructor, creating a new PerformanceObserver instance
    PerformanceObserver(const jsbind::Function& callback);
    /// The observe method.
    /// [`PerformanceObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/observe)
    jsbind::Undefined observe();
    /// The observe method.
    /// [`PerformanceObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/observe)
    jsbind::Undefined observe(const PerformanceObserverInit& options);
    /// The disconnect method.
    /// [`PerformanceObserver.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/disconnect)
    jsbind::Undefined disconnect();
    /// The takeRecords method.
    /// [`PerformanceObserver.takeRecords`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/takeRecords)
    jsbind::Any takeRecords();
    /// Getter of the `supportedEntryTypes` static attribute.
    /// [`PerformanceObserver.supportedEntryTypes`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/supportedEntryTypes)
    /// [`PerformanceObserver.supportedEntryTypes`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/supportedEntryTypes)
    [[nodiscard]] static jsbind::TypedArray<jsbind::String> supportedEntryTypes();
};

} // namespace webbind