#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class PresentationConnection : public EventTarget {
    explicit PresentationConnection(Handle h) noexcept;

public:
    explicit PresentationConnection(const emlite::Val &val) noexcept;
    static PresentationConnection take_ownership(Handle h) noexcept;

    PresentationConnection clone() const noexcept;
    jsbind::String id() const;
    jsbind::String url() const;
    PresentationConnectionState state() const;
    jsbind::Undefined close();
    jsbind::Undefined terminate();
    jsbind::Any onconnect() const;
    void onconnect(const jsbind::Any& value);
    jsbind::Any onclose() const;
    void onclose(const jsbind::Any& value);
    jsbind::Any onterminate() const;
    void onterminate(const jsbind::Any& value);
    BinaryType binaryType() const;
    void binaryType(const BinaryType& value);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Undefined send(const jsbind::Any& data);
};

