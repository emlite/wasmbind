#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Node.hpp"
#include "enums.hpp"

namespace webbind {

class DOMImplementation;
class DocumentType;
class Element;
class HTMLCollection;
class DocumentFragment;
class Text;
class CDATASection;
class Comment;
class ProcessingInstruction;
class Attr;
class Event;
class Range;
class NodeIterator;
class TreeWalker;
class SVGSVGElement;
class NamedFlowMap;
class ViewTransition;
class CaretPosition;
class CaretPositionFromPointOptions;
class FontMetrics;
class StylePropertyMapReadOnly;
class Document;
class Location;
class HTMLElement;
class HTMLHeadElement;
class NodeList;
class HTMLAllCollection;
class PermissionsPolicy;
class FragmentDirective;
class Selection;
class DocumentTimeline;
class FontFaceSet;
class DOMQuad;
class BoxQuadOptions;
class DOMQuadInit;
class ConvertCoordinateOptions;
class DOMRectReadOnly;
class DOMPoint;
class DOMPointInit;
class Animation;
class XPathExpression;
class XPathResult;

/// Interface Document
/// [`Document`](https://developer.mozilla.org/en-US/docs/Web/API/Document)
class Document : public Node {
    explicit Document(Handle h) noexcept;
public:
    explicit Document(const emlite::Val &val) noexcept;
    static Document take_ownership(Handle h) noexcept;
    [[nodiscard]] Document clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Document(..)` constructor, creating a new Document instance
    Document();
    /// [`Document.implementation`](https://developer.mozilla.org/en-US/docs/Web/API/Document/implementation)
    /// [`Document.implementation`](https://developer.mozilla.org/en-US/docs/Web/API/Document/implementation)
    [[nodiscard]] DOMImplementation implementation() const;
    /// [`Document.URL`](https://developer.mozilla.org/en-US/docs/Web/API/Document/URL)
    /// [`Document.URL`](https://developer.mozilla.org/en-US/docs/Web/API/Document/URL)
    [[nodiscard]] jsbind::String URL() const;
    /// [`Document.documentURI`](https://developer.mozilla.org/en-US/docs/Web/API/Document/documentURI)
    /// [`Document.documentURI`](https://developer.mozilla.org/en-US/docs/Web/API/Document/documentURI)
    [[nodiscard]] jsbind::String documentURI() const;
    /// [`Document.compatMode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/compatMode)
    /// [`Document.compatMode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/compatMode)
    [[nodiscard]] jsbind::String compatMode() const;
    /// [`Document.characterSet`](https://developer.mozilla.org/en-US/docs/Web/API/Document/characterSet)
    /// [`Document.characterSet`](https://developer.mozilla.org/en-US/docs/Web/API/Document/characterSet)
    [[nodiscard]] jsbind::String characterSet() const;
    /// [`Document.charset`](https://developer.mozilla.org/en-US/docs/Web/API/Document/charset)
    /// [`Document.charset`](https://developer.mozilla.org/en-US/docs/Web/API/Document/charset)
    [[nodiscard]] jsbind::String charset() const;
    /// [`Document.inputEncoding`](https://developer.mozilla.org/en-US/docs/Web/API/Document/inputEncoding)
    /// [`Document.inputEncoding`](https://developer.mozilla.org/en-US/docs/Web/API/Document/inputEncoding)
    [[nodiscard]] jsbind::String inputEncoding() const;
    /// [`Document.contentType`](https://developer.mozilla.org/en-US/docs/Web/API/Document/contentType)
    /// [`Document.contentType`](https://developer.mozilla.org/en-US/docs/Web/API/Document/contentType)
    [[nodiscard]] jsbind::String contentType() const;
    /// [`Document.doctype`](https://developer.mozilla.org/en-US/docs/Web/API/Document/doctype)
    /// [`Document.doctype`](https://developer.mozilla.org/en-US/docs/Web/API/Document/doctype)
    [[nodiscard]] DocumentType doctype() const;
    /// [`Document.documentElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/documentElement)
    /// [`Document.documentElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/documentElement)
    [[nodiscard]] Element documentElement() const;
    /// The getElementsByTagName method.
    /// [`Document.getElementsByTagName`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementsByTagName)
    HTMLCollection getElementsByTagName(const jsbind::String& qualifiedName);
    /// The getElementsByTagNameNS method.
    /// [`Document.getElementsByTagNameNS`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementsByTagNameNS)
    HTMLCollection getElementsByTagNameNS(const jsbind::String& namespace_, const jsbind::String& localName);
    /// The getElementsByClassName method.
    /// [`Document.getElementsByClassName`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementsByClassName)
    HTMLCollection getElementsByClassName(const jsbind::String& classNames);
    /// The createElement method.
    /// [`Document.createElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createElement)
    Element createElement(const jsbind::String& localName);
    /// The createElement method.
    /// [`Document.createElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createElement)
    Element createElement(const jsbind::String& localName, const jsbind::Any& options);
    /// The createElementNS method.
    /// [`Document.createElementNS`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createElementNS)
    Element createElementNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName);
    /// The createElementNS method.
    /// [`Document.createElementNS`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createElementNS)
    Element createElementNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName, const jsbind::Any& options);
    /// The createDocumentFragment method.
    /// [`Document.createDocumentFragment`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createDocumentFragment)
    DocumentFragment createDocumentFragment();
    /// The createTextNode method.
    /// [`Document.createTextNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createTextNode)
    Text createTextNode(const jsbind::String& data);
    /// The createCDATASection method.
    /// [`Document.createCDATASection`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createCDATASection)
    CDATASection createCDATASection(const jsbind::String& data);
    /// The createComment method.
    /// [`Document.createComment`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createComment)
    Comment createComment(const jsbind::String& data);
    /// The createProcessingInstruction method.
    /// [`Document.createProcessingInstruction`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createProcessingInstruction)
    ProcessingInstruction createProcessingInstruction(const jsbind::String& target, const jsbind::String& data);
    /// The importNode method.
    /// [`Document.importNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/importNode)
    Node importNode(const Node& node);
    /// The importNode method.
    /// [`Document.importNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/importNode)
    Node importNode(const Node& node, const jsbind::Any& options);
    /// The adoptNode method.
    /// [`Document.adoptNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/adoptNode)
    Node adoptNode(const Node& node);
    /// The createAttribute method.
    /// [`Document.createAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createAttribute)
    Attr createAttribute(const jsbind::String& localName);
    /// The createAttributeNS method.
    /// [`Document.createAttributeNS`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createAttributeNS)
    Attr createAttributeNS(const jsbind::String& namespace_, const jsbind::String& qualifiedName);
    /// The createEvent method.
    /// [`Document.createEvent`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createEvent)
    Event createEvent(const jsbind::String& interface);
    /// The createRange method.
    /// [`Document.createRange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createRange)
    Range createRange();
    /// The createNodeIterator method.
    /// [`Document.createNodeIterator`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createNodeIterator)
    NodeIterator createNodeIterator(const Node& root);
    /// The createNodeIterator method.
    /// [`Document.createNodeIterator`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createNodeIterator)
    NodeIterator createNodeIterator(const Node& root, unsigned long whatToShow);
    /// The createNodeIterator method.
    /// [`Document.createNodeIterator`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createNodeIterator)
    NodeIterator createNodeIterator(const Node& root, unsigned long whatToShow, const jsbind::Function& filter);
    /// The createTreeWalker method.
    /// [`Document.createTreeWalker`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createTreeWalker)
    TreeWalker createTreeWalker(const Node& root);
    /// The createTreeWalker method.
    /// [`Document.createTreeWalker`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createTreeWalker)
    TreeWalker createTreeWalker(const Node& root, unsigned long whatToShow);
    /// The createTreeWalker method.
    /// [`Document.createTreeWalker`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createTreeWalker)
    TreeWalker createTreeWalker(const Node& root, unsigned long whatToShow, const jsbind::Function& filter);
    /// [`Document.rootElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/rootElement)
    /// [`Document.rootElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/rootElement)
    [[nodiscard]] SVGSVGElement rootElement() const;
    /// [`Document.namedFlows`](https://developer.mozilla.org/en-US/docs/Web/API/Document/namedFlows)
    /// [`Document.namedFlows`](https://developer.mozilla.org/en-US/docs/Web/API/Document/namedFlows)
    [[nodiscard]] NamedFlowMap namedFlows() const;
    /// The startViewTransition method.
    /// [`Document.startViewTransition`](https://developer.mozilla.org/en-US/docs/Web/API/Document/startViewTransition)
    ViewTransition startViewTransition();
    /// The startViewTransition method.
    /// [`Document.startViewTransition`](https://developer.mozilla.org/en-US/docs/Web/API/Document/startViewTransition)
    ViewTransition startViewTransition(const jsbind::Any& callbackOptions);
    /// The elementFromPoint method.
    /// [`Document.elementFromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/Document/elementFromPoint)
    Element elementFromPoint(double x, double y);
    /// The elementsFromPoint method.
    /// [`Document.elementsFromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/Document/elementsFromPoint)
    jsbind::TypedArray<Element> elementsFromPoint(double x, double y);
    /// The caretPositionFromPoint method.
    /// [`Document.caretPositionFromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/Document/caretPositionFromPoint)
    CaretPosition caretPositionFromPoint(double x, double y);
    /// The caretPositionFromPoint method.
    /// [`Document.caretPositionFromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/Document/caretPositionFromPoint)
    CaretPosition caretPositionFromPoint(double x, double y, const CaretPositionFromPointOptions& options);
    /// [`Document.scrollingElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/scrollingElement)
    /// [`Document.scrollingElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/scrollingElement)
    [[nodiscard]] Element scrollingElement() const;
    /// The measureElement method.
    /// [`Document.measureElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/measureElement)
    FontMetrics measureElement(const Element& element);
    /// The measureText method.
    /// [`Document.measureText`](https://developer.mozilla.org/en-US/docs/Web/API/Document/measureText)
    FontMetrics measureText(const jsbind::String& text, const StylePropertyMapReadOnly& styleMap);
    /// [`Document.fullscreenEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fullscreenEnabled)
    /// [`Document.fullscreenEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fullscreenEnabled)
    [[nodiscard]] bool fullscreenEnabled() const;
    /// [`Document.fullscreen`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fullscreen)
    /// [`Document.fullscreen`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fullscreen)
    [[nodiscard]] bool fullscreen() const;
    /// The exitFullscreen method.
    /// [`Document.exitFullscreen`](https://developer.mozilla.org/en-US/docs/Web/API/Document/exitFullscreen)
    jsbind::Promise<jsbind::Undefined> exitFullscreen();
    /// [`Document.onfullscreenchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfullscreenchange)
    /// [`Document.onfullscreenchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfullscreenchange)
    [[nodiscard]] jsbind::Any onfullscreenchange() const;
    /// Setter of the `onfullscreenchange` attribute.
    /// [`Document.onfullscreenchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfullscreenchange)
    void onfullscreenchange(const jsbind::Any& value);
    /// [`Document.onfullscreenerror`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfullscreenerror)
    /// [`Document.onfullscreenerror`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfullscreenerror)
    [[nodiscard]] jsbind::Any onfullscreenerror() const;
    /// Setter of the `onfullscreenerror` attribute.
    /// [`Document.onfullscreenerror`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfullscreenerror)
    void onfullscreenerror(const jsbind::Any& value);
    /// The parseHTMLUnsafe method.
    /// [`Document.parseHTMLUnsafe`](https://developer.mozilla.org/en-US/docs/Web/API/Document/parseHTMLUnsafe)
    static Document parseHTMLUnsafe(const jsbind::Any& html);
    /// [`Document.location`](https://developer.mozilla.org/en-US/docs/Web/API/Document/location)
    /// [`Document.location`](https://developer.mozilla.org/en-US/docs/Web/API/Document/location)
    [[nodiscard]] Location location() const;
    /// [`Document.domain`](https://developer.mozilla.org/en-US/docs/Web/API/Document/domain)
    /// [`Document.domain`](https://developer.mozilla.org/en-US/docs/Web/API/Document/domain)
    [[nodiscard]] jsbind::String domain() const;
    /// Setter of the `domain` attribute.
    /// [`Document.domain`](https://developer.mozilla.org/en-US/docs/Web/API/Document/domain)
    void domain(const jsbind::String& value);
    /// [`Document.referrer`](https://developer.mozilla.org/en-US/docs/Web/API/Document/referrer)
    /// [`Document.referrer`](https://developer.mozilla.org/en-US/docs/Web/API/Document/referrer)
    [[nodiscard]] jsbind::String referrer() const;
    /// [`Document.cookie`](https://developer.mozilla.org/en-US/docs/Web/API/Document/cookie)
    /// [`Document.cookie`](https://developer.mozilla.org/en-US/docs/Web/API/Document/cookie)
    [[nodiscard]] jsbind::String cookie() const;
    /// Setter of the `cookie` attribute.
    /// [`Document.cookie`](https://developer.mozilla.org/en-US/docs/Web/API/Document/cookie)
    void cookie(const jsbind::String& value);
    /// [`Document.lastModified`](https://developer.mozilla.org/en-US/docs/Web/API/Document/lastModified)
    /// [`Document.lastModified`](https://developer.mozilla.org/en-US/docs/Web/API/Document/lastModified)
    [[nodiscard]] jsbind::String lastModified() const;
    /// [`Document.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/Document/readyState)
    /// [`Document.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/Document/readyState)
    [[nodiscard]] DocumentReadyState readyState() const;
    /// [`Document.title`](https://developer.mozilla.org/en-US/docs/Web/API/Document/title)
    /// [`Document.title`](https://developer.mozilla.org/en-US/docs/Web/API/Document/title)
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    /// [`Document.title`](https://developer.mozilla.org/en-US/docs/Web/API/Document/title)
    void title(const jsbind::String& value);
    /// [`Document.dir`](https://developer.mozilla.org/en-US/docs/Web/API/Document/dir)
    /// [`Document.dir`](https://developer.mozilla.org/en-US/docs/Web/API/Document/dir)
    [[nodiscard]] jsbind::String dir() const;
    /// Setter of the `dir` attribute.
    /// [`Document.dir`](https://developer.mozilla.org/en-US/docs/Web/API/Document/dir)
    void dir(const jsbind::String& value);
    /// [`Document.body`](https://developer.mozilla.org/en-US/docs/Web/API/Document/body)
    /// [`Document.body`](https://developer.mozilla.org/en-US/docs/Web/API/Document/body)
    [[nodiscard]] HTMLElement body() const;
    /// Setter of the `body` attribute.
    /// [`Document.body`](https://developer.mozilla.org/en-US/docs/Web/API/Document/body)
    void body(const HTMLElement& value);
    /// [`Document.head`](https://developer.mozilla.org/en-US/docs/Web/API/Document/head)
    /// [`Document.head`](https://developer.mozilla.org/en-US/docs/Web/API/Document/head)
    [[nodiscard]] HTMLHeadElement head() const;
    /// [`Document.images`](https://developer.mozilla.org/en-US/docs/Web/API/Document/images)
    /// [`Document.images`](https://developer.mozilla.org/en-US/docs/Web/API/Document/images)
    [[nodiscard]] HTMLCollection images() const;
    /// [`Document.embeds`](https://developer.mozilla.org/en-US/docs/Web/API/Document/embeds)
    /// [`Document.embeds`](https://developer.mozilla.org/en-US/docs/Web/API/Document/embeds)
    [[nodiscard]] HTMLCollection embeds() const;
    /// [`Document.plugins`](https://developer.mozilla.org/en-US/docs/Web/API/Document/plugins)
    /// [`Document.plugins`](https://developer.mozilla.org/en-US/docs/Web/API/Document/plugins)
    [[nodiscard]] HTMLCollection plugins() const;
    /// [`Document.links`](https://developer.mozilla.org/en-US/docs/Web/API/Document/links)
    /// [`Document.links`](https://developer.mozilla.org/en-US/docs/Web/API/Document/links)
    [[nodiscard]] HTMLCollection links() const;
    /// [`Document.forms`](https://developer.mozilla.org/en-US/docs/Web/API/Document/forms)
    /// [`Document.forms`](https://developer.mozilla.org/en-US/docs/Web/API/Document/forms)
    [[nodiscard]] HTMLCollection forms() const;
    /// [`Document.scripts`](https://developer.mozilla.org/en-US/docs/Web/API/Document/scripts)
    /// [`Document.scripts`](https://developer.mozilla.org/en-US/docs/Web/API/Document/scripts)
    [[nodiscard]] HTMLCollection scripts() const;
    /// The getElementsByName method.
    /// [`Document.getElementsByName`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementsByName)
    NodeList getElementsByName(const jsbind::String& elementName);
    /// [`Document.currentScript`](https://developer.mozilla.org/en-US/docs/Web/API/Document/currentScript)
    /// [`Document.currentScript`](https://developer.mozilla.org/en-US/docs/Web/API/Document/currentScript)
    [[nodiscard]] jsbind::Any currentScript() const;
    /// The open method.
    /// [`Document.open`](https://developer.mozilla.org/en-US/docs/Web/API/Document/open)
    jsbind::Any open(const jsbind::String& url, const jsbind::String& name, const jsbind::String& features);
    /// The close method.
    /// [`Document.close`](https://developer.mozilla.org/en-US/docs/Web/API/Document/close)
    jsbind::Undefined close();
    /// The write method.
    /// [`Document.write`](https://developer.mozilla.org/en-US/docs/Web/API/Document/write)
    jsbind::Undefined write(const jsbind::Any& text);
    /// The writeln method.
    /// [`Document.writeln`](https://developer.mozilla.org/en-US/docs/Web/API/Document/writeln)
    jsbind::Undefined writeln(const jsbind::Any& text);
    /// [`Document.defaultView`](https://developer.mozilla.org/en-US/docs/Web/API/Document/defaultView)
    /// [`Document.defaultView`](https://developer.mozilla.org/en-US/docs/Web/API/Document/defaultView)
    [[nodiscard]] jsbind::Any defaultView() const;
    /// The hasFocus method.
    /// [`Document.hasFocus`](https://developer.mozilla.org/en-US/docs/Web/API/Document/hasFocus)
    bool hasFocus();
    /// [`Document.designMode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/designMode)
    /// [`Document.designMode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/designMode)
    [[nodiscard]] jsbind::String designMode() const;
    /// Setter of the `designMode` attribute.
    /// [`Document.designMode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/designMode)
    void designMode(const jsbind::String& value);
    /// The execCommand method.
    /// [`Document.execCommand`](https://developer.mozilla.org/en-US/docs/Web/API/Document/execCommand)
    bool execCommand(const jsbind::String& commandId);
    /// The execCommand method.
    /// [`Document.execCommand`](https://developer.mozilla.org/en-US/docs/Web/API/Document/execCommand)
    bool execCommand(const jsbind::String& commandId, bool showUI);
    /// The execCommand method.
    /// [`Document.execCommand`](https://developer.mozilla.org/en-US/docs/Web/API/Document/execCommand)
    bool execCommand(const jsbind::String& commandId, bool showUI, const jsbind::String& value);
    /// The queryCommandEnabled method.
    /// [`Document.queryCommandEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Document/queryCommandEnabled)
    bool queryCommandEnabled(const jsbind::String& commandId);
    /// The queryCommandIndeterm method.
    /// [`Document.queryCommandIndeterm`](https://developer.mozilla.org/en-US/docs/Web/API/Document/queryCommandIndeterm)
    bool queryCommandIndeterm(const jsbind::String& commandId);
    /// The queryCommandState method.
    /// [`Document.queryCommandState`](https://developer.mozilla.org/en-US/docs/Web/API/Document/queryCommandState)
    bool queryCommandState(const jsbind::String& commandId);
    /// The queryCommandSupported method.
    /// [`Document.queryCommandSupported`](https://developer.mozilla.org/en-US/docs/Web/API/Document/queryCommandSupported)
    bool queryCommandSupported(const jsbind::String& commandId);
    /// The queryCommandValue method.
    /// [`Document.queryCommandValue`](https://developer.mozilla.org/en-US/docs/Web/API/Document/queryCommandValue)
    jsbind::String queryCommandValue(const jsbind::String& commandId);
    /// [`Document.hidden`](https://developer.mozilla.org/en-US/docs/Web/API/Document/hidden)
    /// [`Document.hidden`](https://developer.mozilla.org/en-US/docs/Web/API/Document/hidden)
    [[nodiscard]] bool hidden() const;
    /// [`Document.visibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/Document/visibilityState)
    /// [`Document.visibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/Document/visibilityState)
    [[nodiscard]] DocumentVisibilityState visibilityState() const;
    /// [`Document.onreadystatechange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onreadystatechange)
    /// [`Document.onreadystatechange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onreadystatechange)
    [[nodiscard]] jsbind::Any onreadystatechange() const;
    /// Setter of the `onreadystatechange` attribute.
    /// [`Document.onreadystatechange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onreadystatechange)
    void onreadystatechange(const jsbind::Any& value);
    /// [`Document.onvisibilitychange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onvisibilitychange)
    /// [`Document.onvisibilitychange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onvisibilitychange)
    [[nodiscard]] jsbind::Any onvisibilitychange() const;
    /// Setter of the `onvisibilitychange` attribute.
    /// [`Document.onvisibilitychange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onvisibilitychange)
    void onvisibilitychange(const jsbind::Any& value);
    /// [`Document.fgColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fgColor)
    /// [`Document.fgColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fgColor)
    [[nodiscard]] jsbind::String fgColor() const;
    /// Setter of the `fgColor` attribute.
    /// [`Document.fgColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fgColor)
    void fgColor(const jsbind::String& value);
    /// [`Document.linkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/linkColor)
    /// [`Document.linkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/linkColor)
    [[nodiscard]] jsbind::String linkColor() const;
    /// Setter of the `linkColor` attribute.
    /// [`Document.linkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/linkColor)
    void linkColor(const jsbind::String& value);
    /// [`Document.vlinkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/vlinkColor)
    /// [`Document.vlinkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/vlinkColor)
    [[nodiscard]] jsbind::String vlinkColor() const;
    /// Setter of the `vlinkColor` attribute.
    /// [`Document.vlinkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/vlinkColor)
    void vlinkColor(const jsbind::String& value);
    /// [`Document.alinkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/alinkColor)
    /// [`Document.alinkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/alinkColor)
    [[nodiscard]] jsbind::String alinkColor() const;
    /// Setter of the `alinkColor` attribute.
    /// [`Document.alinkColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/alinkColor)
    void alinkColor(const jsbind::String& value);
    /// [`Document.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/bgColor)
    /// [`Document.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/bgColor)
    [[nodiscard]] jsbind::String bgColor() const;
    /// Setter of the `bgColor` attribute.
    /// [`Document.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/bgColor)
    void bgColor(const jsbind::String& value);
    /// [`Document.anchors`](https://developer.mozilla.org/en-US/docs/Web/API/Document/anchors)
    /// [`Document.anchors`](https://developer.mozilla.org/en-US/docs/Web/API/Document/anchors)
    [[nodiscard]] HTMLCollection anchors() const;
    /// [`Document.applets`](https://developer.mozilla.org/en-US/docs/Web/API/Document/applets)
    /// [`Document.applets`](https://developer.mozilla.org/en-US/docs/Web/API/Document/applets)
    [[nodiscard]] HTMLCollection applets() const;
    /// The clear method.
    /// [`Document.clear`](https://developer.mozilla.org/en-US/docs/Web/API/Document/clear)
    jsbind::Undefined clear();
    /// The captureEvents method.
    /// [`Document.captureEvents`](https://developer.mozilla.org/en-US/docs/Web/API/Document/captureEvents)
    jsbind::Undefined captureEvents();
    /// The releaseEvents method.
    /// [`Document.releaseEvents`](https://developer.mozilla.org/en-US/docs/Web/API/Document/releaseEvents)
    jsbind::Undefined releaseEvents();
    /// [`Document.all`](https://developer.mozilla.org/en-US/docs/Web/API/Document/all)
    /// [`Document.all`](https://developer.mozilla.org/en-US/docs/Web/API/Document/all)
    [[nodiscard]] HTMLAllCollection all() const;
    /// [`Document.onfreeze`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfreeze)
    /// [`Document.onfreeze`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfreeze)
    [[nodiscard]] jsbind::Any onfreeze() const;
    /// Setter of the `onfreeze` attribute.
    /// [`Document.onfreeze`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onfreeze)
    void onfreeze(const jsbind::Any& value);
    /// [`Document.onresume`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onresume)
    /// [`Document.onresume`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onresume)
    [[nodiscard]] jsbind::Any onresume() const;
    /// Setter of the `onresume` attribute.
    /// [`Document.onresume`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onresume)
    void onresume(const jsbind::Any& value);
    /// [`Document.wasDiscarded`](https://developer.mozilla.org/en-US/docs/Web/API/Document/wasDiscarded)
    /// [`Document.wasDiscarded`](https://developer.mozilla.org/en-US/docs/Web/API/Document/wasDiscarded)
    [[nodiscard]] bool wasDiscarded() const;
    /// [`Document.permissionsPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/Document/permissionsPolicy)
    /// [`Document.permissionsPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/Document/permissionsPolicy)
    [[nodiscard]] PermissionsPolicy permissionsPolicy() const;
    /// [`Document.pictureInPictureEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Document/pictureInPictureEnabled)
    /// [`Document.pictureInPictureEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/Document/pictureInPictureEnabled)
    [[nodiscard]] bool pictureInPictureEnabled() const;
    /// The exitPictureInPicture method.
    /// [`Document.exitPictureInPicture`](https://developer.mozilla.org/en-US/docs/Web/API/Document/exitPictureInPicture)
    jsbind::Promise<jsbind::Undefined> exitPictureInPicture();
    /// [`Document.onpointerlockchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onpointerlockchange)
    /// [`Document.onpointerlockchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onpointerlockchange)
    [[nodiscard]] jsbind::Any onpointerlockchange() const;
    /// Setter of the `onpointerlockchange` attribute.
    /// [`Document.onpointerlockchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onpointerlockchange)
    void onpointerlockchange(const jsbind::Any& value);
    /// [`Document.onpointerlockerror`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onpointerlockerror)
    /// [`Document.onpointerlockerror`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onpointerlockerror)
    [[nodiscard]] jsbind::Any onpointerlockerror() const;
    /// Setter of the `onpointerlockerror` attribute.
    /// [`Document.onpointerlockerror`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onpointerlockerror)
    void onpointerlockerror(const jsbind::Any& value);
    /// The exitPointerLock method.
    /// [`Document.exitPointerLock`](https://developer.mozilla.org/en-US/docs/Web/API/Document/exitPointerLock)
    jsbind::Undefined exitPointerLock();
    /// [`Document.prerendering`](https://developer.mozilla.org/en-US/docs/Web/API/Document/prerendering)
    /// [`Document.prerendering`](https://developer.mozilla.org/en-US/docs/Web/API/Document/prerendering)
    [[nodiscard]] bool prerendering() const;
    /// [`Document.onprerenderingchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onprerenderingchange)
    /// [`Document.onprerenderingchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onprerenderingchange)
    [[nodiscard]] jsbind::Any onprerenderingchange() const;
    /// Setter of the `onprerenderingchange` attribute.
    /// [`Document.onprerenderingchange`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onprerenderingchange)
    void onprerenderingchange(const jsbind::Any& value);
    /// The requestStorageAccessFor method.
    /// [`Document.requestStorageAccessFor`](https://developer.mozilla.org/en-US/docs/Web/API/Document/requestStorageAccessFor)
    jsbind::Promise<jsbind::Undefined> requestStorageAccessFor(const jsbind::String& requestedOrigin);
    /// The hasUnpartitionedCookieAccess method.
    /// [`Document.hasUnpartitionedCookieAccess`](https://developer.mozilla.org/en-US/docs/Web/API/Document/hasUnpartitionedCookieAccess)
    jsbind::Promise<bool> hasUnpartitionedCookieAccess();
    /// [`Document.fragmentDirective`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fragmentDirective)
    /// [`Document.fragmentDirective`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fragmentDirective)
    [[nodiscard]] FragmentDirective fragmentDirective() const;
    /// The getSelection method.
    /// [`Document.getSelection`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getSelection)
    Selection getSelection();
    /// The hasStorageAccess method.
    /// [`Document.hasStorageAccess`](https://developer.mozilla.org/en-US/docs/Web/API/Document/hasStorageAccess)
    jsbind::Promise<bool> hasStorageAccess();
    /// The requestStorageAccess method.
    /// [`Document.requestStorageAccess`](https://developer.mozilla.org/en-US/docs/Web/API/Document/requestStorageAccess)
    jsbind::Promise<jsbind::Undefined> requestStorageAccess();
    /// The hasPrivateToken method.
    /// [`Document.hasPrivateToken`](https://developer.mozilla.org/en-US/docs/Web/API/Document/hasPrivateToken)
    jsbind::Promise<bool> hasPrivateToken(const jsbind::String& issuer);
    /// The hasRedemptionRecord method.
    /// [`Document.hasRedemptionRecord`](https://developer.mozilla.org/en-US/docs/Web/API/Document/hasRedemptionRecord)
    jsbind::Promise<bool> hasRedemptionRecord(const jsbind::String& issuer);
    /// [`Document.timeline`](https://developer.mozilla.org/en-US/docs/Web/API/Document/timeline)
    /// [`Document.timeline`](https://developer.mozilla.org/en-US/docs/Web/API/Document/timeline)
    [[nodiscard]] DocumentTimeline timeline() const;
    /// [`Document.fonts`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fonts)
    /// [`Document.fonts`](https://developer.mozilla.org/en-US/docs/Web/API/Document/fonts)
    [[nodiscard]] FontFaceSet fonts() const;
    /// The getBoxQuads method.
    /// [`Document.getBoxQuads`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getBoxQuads)
    jsbind::TypedArray<DOMQuad> getBoxQuads();
    /// The getBoxQuads method.
    /// [`Document.getBoxQuads`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getBoxQuads)
    jsbind::TypedArray<DOMQuad> getBoxQuads(const BoxQuadOptions& options);
    /// The convertQuadFromNode method.
    /// [`Document.convertQuadFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/convertQuadFromNode)
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from);
    /// The convertQuadFromNode method.
    /// [`Document.convertQuadFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/convertQuadFromNode)
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The convertRectFromNode method.
    /// [`Document.convertRectFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/convertRectFromNode)
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from);
    /// The convertRectFromNode method.
    /// [`Document.convertRectFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/convertRectFromNode)
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The convertPointFromNode method.
    /// [`Document.convertPointFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/convertPointFromNode)
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from);
    /// The convertPointFromNode method.
    /// [`Document.convertPointFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/convertPointFromNode)
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The getElementById method.
    /// [`Document.getElementById`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementById)
    Element getElementById(const jsbind::String& elementId);
    /// The getAnimations method.
    /// [`Document.getAnimations`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getAnimations)
    jsbind::TypedArray<Animation> getAnimations();
    /// [`Document.children`](https://developer.mozilla.org/en-US/docs/Web/API/Document/children)
    /// [`Document.children`](https://developer.mozilla.org/en-US/docs/Web/API/Document/children)
    [[nodiscard]] HTMLCollection children() const;
    /// [`Document.firstElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/Document/firstElementChild)
    /// [`Document.firstElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/Document/firstElementChild)
    [[nodiscard]] Element firstElementChild() const;
    /// [`Document.lastElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/Document/lastElementChild)
    /// [`Document.lastElementChild`](https://developer.mozilla.org/en-US/docs/Web/API/Document/lastElementChild)
    [[nodiscard]] Element lastElementChild() const;
    /// [`Document.childElementCount`](https://developer.mozilla.org/en-US/docs/Web/API/Document/childElementCount)
    /// [`Document.childElementCount`](https://developer.mozilla.org/en-US/docs/Web/API/Document/childElementCount)
    [[nodiscard]] unsigned long childElementCount() const;
    /// The prepend method.
    /// [`Document.prepend`](https://developer.mozilla.org/en-US/docs/Web/API/Document/prepend)
    jsbind::Undefined prepend(const jsbind::Any& nodes);
    /// The append method.
    /// [`Document.append`](https://developer.mozilla.org/en-US/docs/Web/API/Document/append)
    jsbind::Undefined append(const jsbind::Any& nodes);
    /// The replaceChildren method.
    /// [`Document.replaceChildren`](https://developer.mozilla.org/en-US/docs/Web/API/Document/replaceChildren)
    jsbind::Undefined replaceChildren(const jsbind::Any& nodes);
    /// The moveBefore method.
    /// [`Document.moveBefore`](https://developer.mozilla.org/en-US/docs/Web/API/Document/moveBefore)
    jsbind::Undefined moveBefore(const Node& node, const Node& child);
    /// The querySelector method.
    /// [`Document.querySelector`](https://developer.mozilla.org/en-US/docs/Web/API/Document/querySelector)
    Element querySelector(const jsbind::String& selectors);
    /// The querySelectorAll method.
    /// [`Document.querySelectorAll`](https://developer.mozilla.org/en-US/docs/Web/API/Document/querySelectorAll)
    NodeList querySelectorAll(const jsbind::String& selectors);
    /// The createExpression method.
    /// [`Document.createExpression`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createExpression)
    XPathExpression createExpression(const jsbind::String& expression);
    /// The createExpression method.
    /// [`Document.createExpression`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createExpression)
    XPathExpression createExpression(const jsbind::String& expression, const jsbind::Function& resolver);
    /// The createNSResolver method.
    /// [`Document.createNSResolver`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createNSResolver)
    Node createNSResolver(const Node& nodeResolver);
    /// The evaluate method.
    /// [`Document.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/Document/evaluate)
    XPathResult evaluate(const jsbind::String& expression, const Node& contextNode);
    /// The evaluate method.
    /// [`Document.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/Document/evaluate)
    XPathResult evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver);
    /// The evaluate method.
    /// [`Document.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/Document/evaluate)
    XPathResult evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver, unsigned short type);
    /// The evaluate method.
    /// [`Document.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/Document/evaluate)
    XPathResult evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver, unsigned short type, const XPathResult& result);
    /// [`Document.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onbeforexrselect)
    /// [`Document.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`Document.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/Document/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
};

} // namespace webbind