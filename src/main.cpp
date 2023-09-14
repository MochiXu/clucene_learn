#include <CLucene.h>

#include <iostream>
#include <unordered_map>
#include <vector>

//#include "CLucene/search/TermQuery.h"
//#include "CLucene/store/Directory.h"
//#include "CLucene/store/FSDirectory.h"
//#include "CLucene/util/NumericUtils.h"
//#include "CLucene/util/bkd/bkd_reader.h"
//#include "CLucene/util/bkd/bkd_writer.h"

using namespace lucene::search;
using namespace lucene::index;
// 1. 建立索引
void createIndex() {
    // 确定索引的存储位置
    auto _analyzer = std::make_unique<lucene::analysis::standard::StandardAnalyzer>();
    bool recreateIndexIfExists = true;
    IndexWriter* wr = new IndexWriter();
//    lucene::document::Document doc;
//    TCHAR buf[64];
//    doc.add(*_CLNEW lucene::document::Field(_T("fieldname"), _T("This is some text to be indexed"), lucene::document::Field::STORE_YES | lucene::document::Field::INDEX_TOKENIZED));
//    wr->addDocument(&doc);
//    wr->optimize();
//    wr->close();
//    delete wr;
}

// 2. 查询
//void searchIndex() {
//    lucene::search::IndexSearcher s(L"/path/to/index");
//    lucene::search::Term* term = _CLNEW lucene::search::Term(_T("fieldname"), _T("text"));
//    lucene::search::Query* query = _CLNEW lucene::search::TermQuery(term);
//    lucene::search::Hits* h = s.search(query);
//
//    for (int32_t i = 0; i < h->length(); i++) {
//        _tprintf(_T("Document %d: %s\n"), i, h->doc(i).get(L"fieldname"));
//    }
//
//    _CLDELETE(h);
//    _CLDELETE(query);
//    _CLDELETE(term);
//}

int main() {
    createIndex();
//    searchIndex();
    return 0;
}
