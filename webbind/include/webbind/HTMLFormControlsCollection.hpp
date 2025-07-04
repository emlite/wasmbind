#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLCollection.hpp"
#include "enums.hpp"


class HTMLFormControlsCollection : public HTMLCollection {
    explicit HTMLFormControlsCollection(Handle h) noexcept;

public:
    explicit HTMLFormControlsCollection(const emlite::Val &val) noexcept;
    static HTMLFormControlsCollection take_ownership(Handle h) noexcept;

    HTMLFormControlsCollection clone() const noexcept;
    jsbind::Any namedItem(const jsbind::DOMString& name);
};

