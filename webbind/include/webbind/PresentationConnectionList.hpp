#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class PresentationConnection;


class PresentationConnectionList : public EventTarget {
    explicit PresentationConnectionList(Handle h) noexcept;

public:
    explicit PresentationConnectionList(const emlite::Val &val) noexcept;
    static PresentationConnectionList take_ownership(Handle h) noexcept;

    PresentationConnectionList clone() const noexcept;
    jsbind::TypedArray<PresentationConnection> connections() const;
    jsbind::Any onconnectionavailable() const;
    void onconnectionavailable(const jsbind::Any& value);
};

