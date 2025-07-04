#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Node.hpp"
#include "enums.hpp"


class DocumentType : public Node {
    explicit DocumentType(Handle h) noexcept;

public:
    explicit DocumentType(const emlite::Val &val) noexcept;
    static DocumentType take_ownership(Handle h) noexcept;

    DocumentType clone() const noexcept;
    jsbind::DOMString name() const;
    jsbind::DOMString publicId() const;
    jsbind::DOMString systemId() const;
    jsbind::Undefined before(const jsbind::Any& nodes);
    jsbind::Undefined after(const jsbind::Any& nodes);
    jsbind::Undefined replaceWith(const jsbind::Any& nodes);
    jsbind::Undefined remove();
};

