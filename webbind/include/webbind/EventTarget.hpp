#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Event;
class Observable;
class ObservableEventListenerOptions;


class ObservableEventListenerOptions : public emlite::Val {
  explicit ObservableEventListenerOptions(Handle h) noexcept;
public:
    static ObservableEventListenerOptions take_ownership(Handle h) noexcept;
    explicit ObservableEventListenerOptions(const emlite::Val &val) noexcept;
    ObservableEventListenerOptions() noexcept;
    ObservableEventListenerOptions clone() const noexcept;
    bool capture() const;
    void capture(bool value);
    bool passive() const;
    void passive(bool value);
};

class EventTarget : public emlite::Val {
    explicit EventTarget(Handle h) noexcept;

public:
    explicit EventTarget(const emlite::Val &val) noexcept;
    static EventTarget take_ownership(Handle h) noexcept;

    EventTarget clone() const noexcept;
    EventTarget();
    jsbind::Undefined addEventListener(const jsbind::String& type, const jsbind::Function& callback);
    jsbind::Undefined addEventListener(const jsbind::String& type, const jsbind::Function& callback, const jsbind::Any& options);
    jsbind::Undefined removeEventListener(const jsbind::String& type, const jsbind::Function& callback);
    jsbind::Undefined removeEventListener(const jsbind::String& type, const jsbind::Function& callback, const jsbind::Any& options);
    bool dispatchEvent(const Event& event);
    Observable when(const jsbind::String& type);
    Observable when(const jsbind::String& type, const ObservableEventListenerOptions& options);
};

