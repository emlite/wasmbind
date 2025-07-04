#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class NodeList;


class HTMLProgressElement : public HTMLElement {
    explicit HTMLProgressElement(Handle h) noexcept;

public:
    explicit HTMLProgressElement(const emlite::Val &val) noexcept;
    static HTMLProgressElement take_ownership(Handle h) noexcept;

    HTMLProgressElement clone() const noexcept;
    HTMLProgressElement();
    double value() const;
    void value(double value);
    double max() const;
    void max(double value);
    double position() const;
    NodeList labels() const;
};

