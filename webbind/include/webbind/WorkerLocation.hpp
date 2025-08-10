#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WorkerLocation
/// [`WorkerLocation`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation)
class WorkerLocation : public emlite::Val {
    explicit WorkerLocation(Handle h) noexcept;
public:
    explicit WorkerLocation(const emlite::Val &val) noexcept;
    static WorkerLocation take_ownership(Handle h) noexcept;
    [[nodiscard]] WorkerLocation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`WorkerLocation.href`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/href)
    /// [`WorkerLocation.href`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/href)
    [[nodiscard]] jsbind::String href() const;
    /// [`WorkerLocation.origin`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/origin)
    /// [`WorkerLocation.origin`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// [`WorkerLocation.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/protocol)
    /// [`WorkerLocation.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// [`WorkerLocation.host`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/host)
    /// [`WorkerLocation.host`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/host)
    [[nodiscard]] jsbind::String host() const;
    /// [`WorkerLocation.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/hostname)
    /// [`WorkerLocation.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// [`WorkerLocation.port`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/port)
    /// [`WorkerLocation.port`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/port)
    [[nodiscard]] jsbind::String port() const;
    /// [`WorkerLocation.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/pathname)
    /// [`WorkerLocation.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// [`WorkerLocation.search`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/search)
    /// [`WorkerLocation.search`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/search)
    [[nodiscard]] jsbind::String search() const;
    /// [`WorkerLocation.hash`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/hash)
    /// [`WorkerLocation.hash`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/hash)
    [[nodiscard]] jsbind::String hash() const;
};

} // namespace webbind