<?php
/**
 * @file
 * site_made_ru_features_taxonomy_icons.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function site_made_ru_features_taxonomy_icons_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Фильм 1',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'dff089b6-3295-4a74-a978-ebb6ae449359',
  'type' => 'film',
  'language' => 'ru',
  'created' => 1427045120,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0539ecb2-1c7d-4a96-adff-7833a3d82b51',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'описание',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>описание</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category_icon' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
        'uuid' => 'f1458113-e2bf-4fb8-98e2-9c30abfe456a',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-23 00:25:20 +0700',
);
  return $nodes;
}
