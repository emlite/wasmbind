#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLCollection.hpp"
#include "enums.hpp"

class HTMLOptionElement;


class HTMLOptionsCollection : public HTMLCollection {
    explicit HTMLOptionsCollection(Handle h) noexcept;

public:
    explicit HTMLOptionsCollection(const emlite::Val &val) noexcept;
    static HTMLOptionsCollection take_ownership(Handle h) noexcept;

    HTMLOptionsCollection clone() const noexcept;
    unsigned long length() const;
    void length(unsigned long value);
    jsbind::Undefined add(const jsbind::Any& element);
    jsbind::Undefined add(const jsbind::Any& element, const jsbind::Any& before);
    jsbind::Undefined remove(long index);
    long selectedIndex() const;
    void selectedIndex(long value);
};

