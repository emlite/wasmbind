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
    [[nodiscard]] PerformanceObserverInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> entryTypes() const;
    void entryTypes(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] bool buffered() const;
    void buffered(bool value);
};

/// The PerformanceObserver class.
/// [`PerformanceObserver`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver)
class PerformanceObserver : public emlite::Val {
    explicit PerformanceObserver(Handle h) noexcept;

public:
    explicit PerformanceObserver(const emlite::Val &val) noexcept;
    static PerformanceObserver take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceObserver clone() const noexcept;
    /// The `new PerformanceObserver(..)` constructor, creating a new PerformanceObserver instance
    PerformanceObserver(const jsbind::Function& callback);
    /// The observe method.
    /// [`PerformanceObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/observe)
    jsbind::Undefined observe();
    /// The observe method.
    /// [`PerformanceObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/observe)
    jsbind::Undefined observe(const PerformanceObserverInit& options);
    /// The disconnect method.
    /// [`PerformanceObserver.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/disconnect)
    jsbind::Undefined disconnect();
    /// The takeRecords method.
    /// [`PerformanceObserver.takeRecords`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/takeRecords)
    jsbind::Any takeRecords();
    /// Getter of the `supportedEntryTypes` static attribute.
    /// [`PerformanceObserver.supportedEntryTypes`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceObserver/supportedEntryTypes)
    [[nodiscard]] static jsbind::TypedArray<jsbind::String> supportedEntryTypes();
};

