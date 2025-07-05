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
    ResizeObserverOptions clone() const noexcept;
    ResizeObserverBoxOptions box() const;
    void box(const ResizeObserverBoxOptions& value);
};

class ResizeObserver : public emlite::Val {
    explicit ResizeObserver(Handle h) noexcept;

public:
    explicit ResizeObserver(const emlite::Val &val) noexcept;
    static ResizeObserver take_ownership(Handle h) noexcept;

    ResizeObserver clone() const noexcept;
    ResizeObserver(const jsbind::Function& callback);
    jsbind::Undefined observe(const Element& target);
    jsbind::Undefined observe(const Element& target, const ResizeObserverOptions& options);
    jsbind::Undefined unobserve(const Element& target);
    jsbind::Undefined disconnect();
};

