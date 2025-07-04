#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include <webbind/Document.hpp>
#include "enums.hpp"


class XMLDocument : public Document {
    explicit XMLDocument(Handle h) noexcept;

public:
    explicit XMLDocument(const emlite::Val &val) noexcept;
    static XMLDocument take_ownership(Handle h) noexcept;

    XMLDocument clone() const noexcept;
};

