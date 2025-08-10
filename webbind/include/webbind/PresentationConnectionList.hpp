#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class PresentationConnection;

/// Interface PresentationConnectionList
/// [`PresentationConnectionList`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionList)
class PresentationConnectionList : public EventTarget {
    explicit PresentationConnectionList(Handle h) noexcept;
public:
    explicit PresentationConnectionList(const emlite::Val &val) noexcept;
    static PresentationConnectionList take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationConnectionList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `connections` attribute.
    /// [`PresentationConnectionList.connections`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionList/connections)
    [[nodiscard]] jsbind::TypedArray<PresentationConnection> connections() const;
    /// Getter of the `onconnectionavailable` attribute.
    /// [`PresentationConnectionList.onconnectionavailable`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionList/onconnectionavailable)
    [[nodiscard]] jsbind::Any onconnectionavailable() const;
    /// Setter of the `onconnectionavailable` attribute.
    /// [`PresentationConnectionList.onconnectionavailable`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionList/onconnectionavailable)
    void onconnectionavailable(const jsbind::Any& value);
};

} // namespace webbind