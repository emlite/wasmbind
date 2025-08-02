#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Element;
class ResizeObserverOptions;


class ResizeObserverOptions : public emlite::Val {
  explicit ResizeObserverOptions(Handle h) noexcept;
public:
    static ResizeObserverOptions take_ownership(Handle h) noexcept;
    explicit ResizeObserverOptions(const emlite::Val &val) noexcept;
    ResizeObserverOptions() noexcept;
    [[nodiscard]] ResizeObserverOptions clone() const noexcept;
    [[nodiscard]] ResizeObserverBoxOptions box() const;
    void box(const ResizeObserverBoxOptions& value);
};

/// The ResizeObserver class.
/// [`ResizeObserver`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserver)
class ResizeObserver : public emlite::Val {
    explicit ResizeObserver(Handle h) noexcept;

public:
    explicit ResizeObserver(const emlite::Val &val) noexcept;
    static ResizeObserver take_ownership(Handle h) noexcept;

    [[nodiscard]] ResizeObserver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ResizeObserver(..)` constructor, creating a new ResizeObserver instance
    ResizeObserver(const jsbind::Function& callback);
    /// The observe method.
    /// [`ResizeObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserver/observe)
    jsbind::Undefined observe(const Element& target);
    /// The observe method.
    /// [`ResizeObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserver/observe)
    jsbind::Undefined observe(const Element& target, const ResizeObserverOptions& options);
    /// The unobserve method.
    /// [`ResizeObserver.unobserve`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserver/unobserve)
    jsbind::Undefined unobserve(const Element& target);
    /// The disconnect method.
    /// [`ResizeObserver.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserver/disconnect)
    jsbind::Undefined disconnect();
};

