#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class NodeList;


class HTMLMeterElement : public HTMLElement {
    explicit HTMLMeterElement(Handle h) noexcept;

public:
    explicit HTMLMeterElement(const emlite::Val &val) noexcept;
    static HTMLMeterElement take_ownership(Handle h) noexcept;

    HTMLMeterElement clone() const noexcept;
    HTMLMeterElement();
    double value() const;
    void value(double value);
    double min() const;
    void min(double value);
    double max() const;
    void max(double value);
    double low() const;
    void low(double value);
    double high() const;
    void high(double value);
    double optimum() const;
    void optimum(double value);
    NodeList labels() const;
};

