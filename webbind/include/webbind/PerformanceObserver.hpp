#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PerformanceObserverInit;


class PerformanceObserverInit : public emlite::Val {
  explicit PerformanceObserverInit(Handle h) noexcept;
public:
    static PerformanceObserverInit take_ownership(Handle h) noexcept;
    explicit PerformanceObserverInit(const emlite::Val &val) noexcept;
    PerformanceObserverInit() noexcept;
    PerformanceObserverInit clone() const noexcept;
    jsbind::Sequence<jsbind::DOMString> entryTypes() const;
    void entryTypes(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    bool buffered() const;
    void buffered(bool value);
};

class PerformanceObserver : public emlite::Val {
    explicit PerformanceObserver(Handle h) noexcept;

public:
    explicit PerformanceObserver(const emlite::Val &val) noexcept;
    static PerformanceObserver take_ownership(Handle h) noexcept;

    PerformanceObserver clone() const noexcept;
    PerformanceObserver(const jsbind::Function& callback);
    jsbind::Undefined observe(const PerformanceObserverInit& options);
    jsbind::Undefined disconnect();
    jsbind::Any takeRecords();
    static jsbind::FrozenArray<jsbind::DOMString> supportedEntryTypes();
};

