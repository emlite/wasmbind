#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Element;
class IntersectionObserverEntry;


class IntersectionObserver : public emlite::Val {
    explicit IntersectionObserver(Handle h) noexcept;

public:
    explicit IntersectionObserver(const emlite::Val &val) noexcept;
    static IntersectionObserver take_ownership(Handle h) noexcept;

    IntersectionObserver clone() const noexcept;
    IntersectionObserver(const jsbind::Function& callback);
    IntersectionObserver(const jsbind::Function& callback, const jsbind::Any& options);
    jsbind::Any root() const;
    jsbind::String rootMargin() const;
    jsbind::String scrollMargin() const;
    jsbind::TypedArray<double> thresholds() const;
    long delay() const;
    bool trackVisibility() const;
    jsbind::Undefined observe(const Element& target);
    jsbind::Undefined unobserve(const Element& target);
    jsbind::Undefined disconnect();
    jsbind::TypedArray<IntersectionObserverEntry> takeRecords();
};

