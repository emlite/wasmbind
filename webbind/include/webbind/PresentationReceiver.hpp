#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PresentationConnectionList;

/// Interface PresentationReceiver
/// [`PresentationReceiver`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationReceiver)
class PresentationReceiver : public emlite::Val {
    explicit PresentationReceiver(Handle h) noexcept;
public:
    explicit PresentationReceiver(const emlite::Val &val) noexcept;
    static PresentationReceiver take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationReceiver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PresentationReceiver.connectionList`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationReceiver/connectionList)
    /// [`PresentationReceiver.connectionList`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationReceiver/connectionList)
    [[nodiscard]] jsbind::Promise<PresentationConnectionList> connectionList() const;
};

} // namespace webbind