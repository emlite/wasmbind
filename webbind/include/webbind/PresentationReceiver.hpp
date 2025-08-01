#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PresentationConnectionList;


/// The PresentationReceiver class.
/// [`PresentationReceiver`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationReceiver)
class PresentationReceiver : public emlite::Val {
    explicit PresentationReceiver(Handle h) noexcept;

public:
    explicit PresentationReceiver(const emlite::Val &val) noexcept;
    static PresentationReceiver take_ownership(Handle h) noexcept;

    [[nodiscard]] PresentationReceiver clone() const noexcept;
    /// Getter of the `connectionList` attribute.
    /// [`PresentationReceiver.connectionList`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationReceiver/connectionList)
    [[nodiscard]] jsbind::Promise<PresentationConnectionList> connectionList() const;
};

