#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FenceEvent;
class FencedFrameConfig;
class Event;


class FenceEvent : public emlite::Val {
  explicit FenceEvent(Handle h) noexcept;
public:
    static FenceEvent take_ownership(Handle h) noexcept;
    explicit FenceEvent(const emlite::Val &val) noexcept;
    FenceEvent() noexcept;
    FenceEvent clone() const noexcept;
    jsbind::DOMString eventType() const;
    void eventType(const jsbind::DOMString& value);
    jsbind::DOMString eventData() const;
    void eventData(const jsbind::DOMString& value);
    jsbind::Sequence<FenceReportingDestination> destination() const;
    void destination(const jsbind::Sequence<FenceReportingDestination>& value);
    bool crossOriginExposed() const;
    void crossOriginExposed(bool value);
    bool once() const;
    void once(bool value);
    jsbind::USVString destinationURL() const;
    void destinationURL(const jsbind::USVString& value);
};

class Fence : public emlite::Val {
    explicit Fence(Handle h) noexcept;

public:
    explicit Fence(const emlite::Val &val) noexcept;
    static Fence take_ownership(Handle h) noexcept;

    Fence clone() const noexcept;
    jsbind::Undefined reportEvent();
    jsbind::Undefined reportEvent(const jsbind::Any& event);
    jsbind::Undefined setReportEventDataForAutomaticBeacons();
    jsbind::Undefined setReportEventDataForAutomaticBeacons(const FenceEvent& event);
    jsbind::Sequence<FencedFrameConfig> getNestedConfigs();
    jsbind::Promise<jsbind::Undefined> disableUntrustedNetwork();
    jsbind::Undefined notifyEvent(const Event& event);
};

