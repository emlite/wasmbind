#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class PressureObserverOptions;
class PressureRecord;

/// Interface PressureObserver
/// [`PressureObserver`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver)
class PressureObserver : public emlite::Val {
    explicit PressureObserver(Handle h) noexcept;
public:
    explicit PressureObserver(const emlite::Val &val) noexcept;
    static PressureObserver take_ownership(Handle h) noexcept;
    [[nodiscard]] PressureObserver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PressureObserver(..)` constructor, creating a new PressureObserver instance
    PressureObserver(const jsbind::Function& callback);
    /// The observe method.
    /// [`PressureObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver/observe)
    jsbind::Promise<jsbind::Undefined> observe(const PressureSource& source);
    /// The observe method.
    /// [`PressureObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver/observe)
    jsbind::Promise<jsbind::Undefined> observe(const PressureSource& source, const PressureObserverOptions& options);
    /// The unobserve method.
    /// [`PressureObserver.unobserve`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver/unobserve)
    jsbind::Undefined unobserve(const PressureSource& source);
    /// The disconnect method.
    /// [`PressureObserver.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver/disconnect)
    jsbind::Undefined disconnect();
    /// The takeRecords method.
    /// [`PressureObserver.takeRecords`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver/takeRecords)
    jsbind::TypedArray<PressureRecord> takeRecords();
    /// Getter of the `knownSources` static attribute.
    /// [`PressureObserver.knownSources`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver/knownSources)
    /// [`PressureObserver.knownSources`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserver/knownSources)
    [[nodiscard]] static jsbind::TypedArray<PressureSource> knownSources();
};

} // namespace webbind