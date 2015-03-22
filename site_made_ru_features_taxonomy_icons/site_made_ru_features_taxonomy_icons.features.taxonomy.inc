<?php
/**
 * @file
 * site_made_ru_features_taxonomy_icons.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function site_made_ru_features_taxonomy_icons_taxonomy_default_vocabularies() {
  return array(
    'category_icons' => array(
      'name' => 'Категории иконки',
      'machine_name' => 'category_icons',
      'description' => 'Словарь для иконок',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
