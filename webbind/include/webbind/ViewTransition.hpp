#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ViewTransitionTypeSet;


class ViewTransition : public emlite::Val {
    explicit ViewTransition(Handle h) noexcept;

public:
    explicit ViewTransition(const emlite::Val &val) noexcept;
    static ViewTransition take_ownership(Handle h) noexcept;

    ViewTransition clone() const noexcept;
    jsbind::Promise<jsbind::Undefined> updateCallbackDone() const;
    jsbind::Promise<jsbind::Undefined> ready() const;
    jsbind::Promise<jsbind::Undefined> finished() const;
    jsbind::Undefined skipTransition();
    ViewTransitionTypeSet types() const;
    void types(const ViewTransitionTypeSet& value);
};

