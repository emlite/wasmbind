#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WorkerLocation class.
/// [`WorkerLocation`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation)
class WorkerLocation : public emlite::Val {
    explicit WorkerLocation(Handle h) noexcept;

public:
    explicit WorkerLocation(const emlite::Val &val) noexcept;
    static WorkerLocation take_ownership(Handle h) noexcept;

    [[nodiscard]] WorkerLocation clone() const noexcept;
    /// Getter of the `href` attribute.
    /// [`WorkerLocation.href`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/href)
    [[nodiscard]] jsbind::String href() const;
    /// Getter of the `origin` attribute.
    /// [`WorkerLocation.origin`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// Getter of the `protocol` attribute.
    /// [`WorkerLocation.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Getter of the `host` attribute.
    /// [`WorkerLocation.host`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/host)
    [[nodiscard]] jsbind::String host() const;
    /// Getter of the `hostname` attribute.
    /// [`WorkerLocation.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// Getter of the `port` attribute.
    /// [`WorkerLocation.port`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/port)
    [[nodiscard]] jsbind::String port() const;
    /// Getter of the `pathname` attribute.
    /// [`WorkerLocation.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// Getter of the `search` attribute.
    /// [`WorkerLocation.search`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/search)
    [[nodiscard]] jsbind::String search() const;
    /// Getter of the `hash` attribute.
    /// [`WorkerLocation.hash`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerLocation/hash)
    [[nodiscard]] jsbind::String hash() const;
};

