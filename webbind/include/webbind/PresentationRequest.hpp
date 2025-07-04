#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class PresentationConnection;
class PresentationAvailability;


class PresentationRequest : public EventTarget {
    explicit PresentationRequest(Handle h) noexcept;

public:
    explicit PresentationRequest(const emlite::Val &val) noexcept;
    static PresentationRequest take_ownership(Handle h) noexcept;

    PresentationRequest clone() const noexcept;
    PresentationRequest(const jsbind::Sequence<jsbind::USVString>& urls);
    jsbind::Promise start();
    jsbind::Promise reconnect(const jsbind::USVString& presentationId);
    jsbind::Promise getAvailability();
    jsbind::Any onconnectionavailable() const;
    void onconnectionavailable(const jsbind::Any& value);
};

